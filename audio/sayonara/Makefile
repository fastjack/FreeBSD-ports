# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD$

PORTNAME=	sayonara
PORTVERSION=	0.9.2
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://www.sayonara-player.com/sw/
DISTNAME=	${PORTNAME}-player-${PORTVERSION}-git11-20161030

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small, clear, and fast Qt-based audio player

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/license.txt

LIB_DEPENDS=	libtag.so:audio/taglib \
		libmtp.so:multimedia/libmtp

USES=		cmake compiler:c++11-lib execinfo pkgconfig
USE_GSTREAMER1=	flac mpg123 ogg opus vorbis	# XXX: likely incomplete
USE_QT5=	dbus core gui network sql sql-sqlite3_run widgets xml \
		buildtools_build qmake_build linguisttools_build
INSTALLS_ICONS=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-player

post-patch:
	@${REINPLACE_CMD} -e '/man1/s,share/,,' \
		${WRKSRC}/resources/CMakeLists.txt
	@${REINPLACE_CMD} -e '/DESTINATION/s,/usr/,,' \
		${WRKSRC}/src/GUI/Resources/Icons/CMakeLists.txt

.include <bsd.port.mk>
