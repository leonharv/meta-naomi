SUMMARY = "An open source platform for developing always-on, voice-controlled applications."
HOMEPAGE = "https://naomiproject.github.io/"
BUGTRACKER = "https://github.com/NaomiProject/Naomi/issues"
SECTION = "multimedia/speech"
LICENSE = "MIT"

SRC_URI = "\
	https://github.com/NaomiProject/Naomi/archive/v${PV}.tar.gz \
"

SRC_URI[md5sum] = "79338181d912ee2c3ce8b85390d1ec25"
SRC_URI[sha256sum] = "70907ea07870e057ffd0b263c3d5da40175a35a001b8b7b50819183c0db0b11c"

inherit setuptools

S = "${WORKDIR}/Naomi-2.2"

LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7eabe29ac1e13326a1084d385737719a"

RDEPENDS_${PN} += "\
	python \
	python-apscheduler \
	python-mock \
	python-pytz \
	python-pyyaml \
	python-requests \
	python-blessings \
	python-pyalsaaudio \
	python-python-slugify \
	python-cmuclmtk \
	python-setuptools \
	pocketsphinx \
"

# Could be already installed by the raspberry pi image
RDEPENDS_${PN} += "\
	python-argparse \
	python-feedparser \
	python-pymad \
"

