# $NetBSD: Makefile,v 1.4 2017/09/04 18:08:30 wiz Exp $

DISTNAME=	Scrapy-1.4.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_PYPI:=S/Scrapy/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://scrapy.org/
COMMENT=	High-level Web Crawling and Web Scraping framework
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-queuelib-[0-9]*:../../devel/py-queuelib
DEPENDS+=	${PYPKGPREFIX}-parsel>=1.1.0:../../www/py-parsel
DEPENDS+=	${PYPKGPREFIX}-pydispatcher>=2.0.5:../../devel/py-pydispatcher
DEPENDS+=	${PYPKGPREFIX}-twisted>=13.1.0:../../net/py-twisted

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/scrapy \
		${DESTDIR}${PREFIX}/bin/scrapy${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
