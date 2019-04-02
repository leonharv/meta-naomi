SUMMARY = "A thin, practical wrapper around terminal coloring, styling, and positioning."
SECTION = "devel/python"
HOMEPAGE = "https://github.com/erikrose/blessings"
LICENSE = "MIT"

LIC_FILES_CHKSUM = "file://LICENSE;md5=4c36985b553d025e4fe770308d00ed39"

SRC_URI[md5sum] = "38555a2bba0ace706aec58444368e022"
SRC_URI[sha256sum] = "98e5854d805f50a5b58ac2333411b0482516a8210f23f43308baeb58d77c157d"

PYPI_PACKAGE = "blessings"
inherit pypi

BBCLASSEXTEND = "nativesdk"
