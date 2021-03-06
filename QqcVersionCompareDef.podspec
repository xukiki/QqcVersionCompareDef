Pod::Spec.new do |s|

  s.license      = "MIT"
  s.author       = { "qqc" => "20599378@qq.com" }
  s.platform     = :ios, "8.0"
  s.requires_arc  = true

  s.name         = "QqcVersionCompareDef"
  s.version      = "1.0.10"
  s.summary      = "QqcVersionCompareDef"
  s.homepage     = "https://github.com/xukiki/QqcVersionCompareDef"
  s.source       = { :git => "https://github.com/xukiki/QqcVersionCompareDef.git", :tag => "#{s.version}" }
  
  s.source_files  = ["QqcVersionCompareDef/*.{h,m}"]

end
