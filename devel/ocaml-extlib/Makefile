# $NetBSD: Makefile,v 1.10 2017/09/08 09:51:20 jaapb Exp $

VERSION=	1.7.2
GITHUB_PROJECT=	ocaml-extlib
DISTNAME=	${GITHUB_PROJECT}-${VERSION}
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=ygrek/}

MAINTAINER=	jaapb@NetBSD.org
HOMEPAGE=	https://github.com/ygrek/ocaml-extlib
COMMENT=	Alternative standard library for OCaml
LICENSE=	gnu-lgpl-v2.1

USE_TOOLS+=	gmake
MAKE_JOBS_SAFE=	no

OCAML_USE_FINDLIB=	yes

.include "../../mk/ocaml.mk"

BUILD_TARGET=	build

.include "../../devel/ocaml-cppo/buildlink3.mk"
#.include "../../lang/camlp4/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
