# Created by: Pedro F. Giffuni
# $FreeBSD$

PORTNAME=	tfel
PORTVERSION=	2.0.4
CATEGORIES=	science
MASTER_SITES=	SF/${PORTNAME}/
PKGNAMESUFFIX=	-mfront

MAINTAINER=	pfg@FreeBSD.org
COMMENT=	Code generation tool dedicated to material knowledge

LICENSE=	GPLv3

OPTIONS_DEFINE=		GNUPLOT PYTHON
OPTIONS_DEFAULT=	GNUPLOT
GNUPLOT_BUILD_DEPENDS=	gnuplot:math/gnuplot
GNUPLOT_RUN_DEPENDS=	gnuplot:math/gnuplot

ONLY_FOR_ARCHS=	amd64 i386

USES=		autoreconf libtool tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS= --enable-aster
USE_LDCONFIG=	yes

PYTHON_CONFIGURE_ENABLE= python
PYTHON_USES=	python

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
