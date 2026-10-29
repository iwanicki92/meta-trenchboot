LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+tb"

SRC_URI = "git://github.com/TrenchBoot/xen.git;branch=${XEN_BRANCH};protocol=https"

SRCREV = "8bea73c4615ba46de97e1b7d46a4f5e0a137f29d"

S = "${WORKDIR}/git"

XEN_REL = "4.23"
XEN_BRANCH = "tb-staging"
