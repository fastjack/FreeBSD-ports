# Created by: tcberner
# $FreeBSD$

PORTNAME=	kservice
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 advanced plugin and service introspection

USES=		bison cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	archive config coreaddons crash dbusaddons \
		doctools ecm i18n
USE_QT5=	buildtools_build core dbus gui qmake_build xml

# Make the applications.menu file not conflict with KDE4.
CMAKE_ARGS=	-DAPPLICATIONS_MENU_NAME:STRING="kf5-applications.menu"

.include <bsd.port.mk>
