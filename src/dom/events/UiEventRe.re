module Impl = (T: {type t;}) => {
  [@bs.get] external detail : T.t => int = "detail";
  [@bs.get] external view : T.t => Dom.window = "view"; /* technically returns a `WindowProxy` */
};

type t = Dom.uiEvent;

include EventRe.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "UIEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "UIEvent";
