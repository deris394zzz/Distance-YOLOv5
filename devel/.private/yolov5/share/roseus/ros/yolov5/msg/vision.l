;; Auto-generated. Do not edit!


(when (boundp 'yolov5::vision)
  (if (not (find-package "YOLOV5"))
    (make-package "YOLOV5"))
  (shadow 'vision (find-package "YOLOV5")))
(unless (find-package "YOLOV5::VISION")
  (make-package "YOLOV5::VISION"))

(in-package "ROS")
;;//! \htmlinclude vision.msg.html


(defclass yolov5::vision
  :super ros::object
  :slots (_jarak_objek ))

(defmethod yolov5::vision
  (:init
   (&key
    ((:jarak_objek __jarak_objek) 0)
    )
   (send-super :init)
   (setq _jarak_objek (round __jarak_objek))
   self)
  (:jarak_objek
   (&optional __jarak_objek)
   (if __jarak_objek (setq _jarak_objek __jarak_objek)) _jarak_objek)
  (:serialization-length
   ()
   (+
    ;; int64 _jarak_objek
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _jarak_objek
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _jarak_objek (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _jarak_objek) (= (length (_jarak_objek . bv)) 2)) ;; bignum
              (write-long (ash (elt (_jarak_objek . bv) 0) 0) s)
              (write-long (ash (elt (_jarak_objek . bv) 1) -1) s))
             ((and (class _jarak_objek) (= (length (_jarak_objek . bv)) 1)) ;; big1
              (write-long (elt (_jarak_objek . bv) 0) s)
              (write-long (if (>= _jarak_objek 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _jarak_objek s)(write-long (if (>= _jarak_objek 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _jarak_objek
#+(or :alpha :irix6 :x86_64)
      (setf _jarak_objek (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _jarak_objek (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get yolov5::vision :md5sum-) "e5db1e3e1b216d22cf080e8124bd6b36")
(setf (get yolov5::vision :datatype-) "yolov5/vision")
(setf (get yolov5::vision :definition-)
      "int64 jarak_objek
")



(provide :yolov5/vision "e5db1e3e1b216d22cf080e8124bd6b36")


