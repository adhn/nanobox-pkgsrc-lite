# $NetBSD: Makefile,v 1.11 2017/02/24 00:59:13 maya Exp $

DISTNAME=	libvdpau-1.1.1
PKGREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://people.freedesktop.org/~aplattner/vdpau/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	cheusov@NetBSD.org
HOMEPAGE=	http://http.download.nvidia.com/XFree86/vdpau/doxygen/html/index.html
COMMENT=	Video Decode and Presentation API for Unix
LICENSE=	mit

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config gmake
USE_LANGUAGES=		c c++
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-documentation

PKGCONFIG_OVERRIDE+=	vdpau.pc.in

EGDIR=		${PREFIX}/share/examples/libvdpau
CONF_FILES=	${EGDIR}/vdpau_wrapper.cfg \
		${PKG_SYSCONFDIR}/vdpau_wrapper.cfg

INSTALL_MAKE_FLAGS=	sysconfdir=${EGDIR}

.include "available.mk"
.if ${VDPAU_AVAILABLE} == no
PKG_SKIP_REASON+=	"VDPAU is not available on this platform"
.endif

.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/dri2proto/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
