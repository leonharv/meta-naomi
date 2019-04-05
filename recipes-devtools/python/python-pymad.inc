SUMMARY = "A wrapper for the MAD libraries."
SECTION = "devel/python"
HOMEPAGE = "https://pypi.org/project/Unidecode/"
LICENSE = "GPL2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=3bf50002aefd002f49e7bb854063f7e7"

DEPENDS += "\
	libmad \
"

PYPI_PACKAGE = "pymad"
inherit pypi

SRC_URI[md5sum] = "936fa48f477ff0c2de82f4f72155fe38"
SRC_URI[sha256sum] = "4f3cb83614095cf15205d2ebc344148ae11acb22c85741a94748f614d4c4def1"

