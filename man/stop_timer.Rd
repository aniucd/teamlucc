% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/track_time.R
\docType{methods}
\name{stop_timer}
\alias{stop_timer}
\alias{stop_timer,Track_time,ANY-method}
\alias{stop_timer,Track_time,character-method}
\alias{stop_timer,Track_time-method}
\title{Stop a tracking timer}
\usage{
stop_timer(x, label = "Default")

\S4method{stop_timer}{Track_time,ANY}(x)

\S4method{stop_timer}{Track_time,character}(x, label = "Default")
}
\arguments{
\item{x}{a \code{Track_time} object}

\item{label}{an optional label used to maintain multiple tracking timers}
}
\value{
Track_time object
}
\description{
The \code{label} is optional. If not supplied, the default timer, labelled 
'Default' will be used.
}
\examples{
timer <- Track_time()
print(timer)

timer <- start_timer(timer, 'test')

print(timer, 'test')

timer <- stop_timer(timer, 'test')

print(timer)
}
\seealso{
\code{\link{start_timer}}
}

