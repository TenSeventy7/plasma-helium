Name:           plasma-helium
Version:        6.4.helium1.0.1
Release:        1.1%{?dist}
Summary:        Helium is a minor Breeze fork that just aims to modernize Breeze while keeping the proper look of the stylesheet, matching it well with KDE.

License:        BSD-3-Clause AND CC0-1.0 AND GPL-2.0-only AND GPL-2.0-or-later AND GPL-3.0-only AND MIT
URL:            https://github.com/TenSeventy7/plasma-helium
Source:         %{url}/archive/%{version}.tar.gz

BuildRequires:  cmake
BuildRequires:  cmake(KDecoration3)
BuildRequires:  cmake(KF5Config)
BuildRequires:  cmake(KF5CoreAddons)
BuildRequires:  cmake(KF5FrameworkIntegration)
BuildRequires:  cmake(KF5GuiAddons)
BuildRequires:  cmake(KF5I18n)
BuildRequires:  cmake(KF5Kirigami2)
BuildRequires:  cmake(KF5WindowSystem)
BuildRequires:  cmake(KF6ColorScheme)
BuildRequires:  cmake(KF6Config)
BuildRequires:  cmake(KF6CoreAddons)
BuildRequires:  cmake(KF6FrameworkIntegration)
BuildRequires:  cmake(KF6GuiAddons)
BuildRequires:  cmake(KF6I18n)
BuildRequires:  cmake(KF6KCMUtils)
BuildRequires:  cmake(KF6KirigamiPlatform)
BuildRequires:  cmake(KF6WindowSystem)
BuildRequires:  cmake(Qt5DBus)
BuildRequires:  cmake(Qt5Quick)
BuildRequires:  cmake(Qt5Widgets)
BuildRequires:  cmake(Qt5X11Extras)
BuildRequires:  cmake(Qt6Core)
BuildRequires:  cmake(Qt6DBus)
BuildRequires:  cmake(Qt6Quick)
BuildRequires:  cmake(Qt6Svg)
BuildRequires:  cmake(Qt6Widgets)
BuildRequires:  cmake(Qt6Xml)
BuildRequires:  extra-cmake-modules
BuildRequires:  gettext

%description
Helium is a minor Breeze fork that just aims to modernize Breeze 
while keeping the proper look of the stylesheet, matching it well 
with KDE. This practically means it's mostly just giving paddings 
a bit more generously than upstream (at least right now). 
Based on Paul McAuley's Klassy. 

%prep
%autosetup -p1

%build
%cmake \
    -DBUILD_TESTING=OFF \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=%{_prefix} \
    -DKDE_INSTALL_USE_QT_SYS_PATHS=ON
%cmake_build

%install
%cmake_install

%files
%doc README.md AUTHORS
%license LICENSES/*.txt
%{_bindir}/helium-settings
%{_datadir}/applications/kcm_heliumdecoration.desktop
%{_datadir}/applications/helium-settings.desktop
%{_datadir}/applications/heliumstyleconfig.desktop
%{_datadir}/color-schemes/Helium*
%{_datadir}/icons/hicolor/scalable/apps/helium-settings.svgz
%{_datadir}/icons/helium*
%{_datadir}/kstyle/themes/helium.themerc
%{_libdir}/cmake/Helium/HeliumConfig.cmake
%{_libdir}/cmake/Helium/HeliumConfigVersion.cmake
%{_libdir}/libheliumcommon5.so*
%{_libdir}/libheliumcommon6.so*
%{_libdir}/qt5/plugins/styles/helium5.so
%{_libdir}/qt6/plugins/kstyle_config/heliumstyleconfig.so
%{_libdir}/qt6/plugins/org.kde.kdecoration3.kcm/kcm_heliumdecoration.so
%{_libdir}/qt6/plugins/org.kde.kdecoration3.kcm/heliumdecoration/presets/*.helium-deco
%{_libdir}/qt6/plugins/org.kde.kdecoration3/org.kde.helium.so
%{_libdir}/qt6/plugins/styles/helium6.so

%changelog
%autochangelog
