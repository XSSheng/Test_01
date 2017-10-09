Pod::Spec.new do |s|
s.name             = "Test_01"
s.version          = "1.0.2"
s.summary          = "Custom Category used on iOS."
s.description      = <<-DESC
Custom Category used on iOS, which implement by Objective-C.
DESC
s.homepage         = "https://github.com/XSSheng/Test_01"
s.license          = 'MIT'
s.author           = { "xinzhang" => "zx270611346@gmail.com" }
s.platform         = :ios, '7.0'
s.source           = { :git => "https://github.com/XSSheng/Test_01.git", :tag => s.version }
s.requires_arc     = true

# UIView 和 EasyLog 在工程中以子目录显示
s.source_files  = 'Classes'
s.source_files  = 'Framework'
 s.vendored_frameworks = 'EJ_CYSdk.framework'

end

