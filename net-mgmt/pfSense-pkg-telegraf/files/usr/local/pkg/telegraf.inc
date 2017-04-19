<?php

require_once("config.inc");
require_once("interfaces.inc");
require_once("service-utils.inc");
require_once("util.inc");

define('TELEGRAF_BASE', '/usr/local');
define('RC_FILENAME', 'telegraf_service.sh');

function setup_telegraf() {
	global $config;

	if (!is_array($config['installedpackages']['telegraf'])) {
		return;
	}
	if (!is_array($config['installedpackages']['telegraf']['config'])) {
		return;
	}

	conf_mount_rw();

	if (isset($config['installedpackages']['telegraf']['config'][0]['enable']) &&
		$config['installedpackages']['telegraf']['config'][0]['enable'] == "on") {
			telegraf_write_rcfile();
			if (is_service_running("telegraf")) {
				restart_service("telegraf");
			} else {
				start_service("telegraf");
			}
		} else {
			if (is_service_running("telegraf")) {
				stop_service("telegraf");
			}
			unlink_if_exists(TELEGRAF_BASE . "/etc/rc.d/" . RC_FILENAME);
		}

	conf_mount_ro();
}

function telegraf_write_rcfile() {
	write_rcfile(array(
		"file" => RC_FILENAME,
		"start" => "/usr/bin/nohup " . TELEGRAF_BASE . "/bin/telegraf > /dev/null 2>&1 &",
		"stop" => "/bin/pkill telegraf"
		)
	);
}

?>
