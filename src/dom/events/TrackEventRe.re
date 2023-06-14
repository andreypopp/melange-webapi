type t = Dom.trackEvent;
type track; /* TODO: VideoTrack or AudioTrack or TextTrack */

include EventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "TrackEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "TrackEvent";

[@bs.get] external track : t => track = "track";
