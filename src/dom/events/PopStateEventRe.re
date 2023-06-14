type t = Dom.popStateEvent;

include EventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "PopStateEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "PopStateEvent";

[@bs.get] external state : t => Js.t({..}) = "state";
