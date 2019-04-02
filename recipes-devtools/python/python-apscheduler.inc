SUMMARY = "Advanced Python Scheduler (APScheduler) is a Python library that lets you schedule your Python code to be executed later, either just once or periodically."
SECTION = "devel/python"
HOMEPAGE = "https://apscheduler.readthedocs.io/en/latest/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=f0e423eea5c91e7aa21bdb70184b3e53"

DEPENDS += "python-setuptools-scm-native"

PYPI_PACKAGE = "APScheduler"
inherit pypi

SRC_URI[md5sum] = "5686871a0331a8b606600b818fe3c862"
SRC_URI[sha256sum] = "6599bc78901ee7e9be85cbd073d9cc155c42d2bc867c5cde4d4d1cc339ebfbeb"

BBCLASSEXTEND = "nativesdk"

