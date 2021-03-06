% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{convolve_cpp}
\alias{convolve_cpp}
\title{Pure Rcpp Routine}
\usage{
convolve_cpp(a, b)
}
\arguments{
\item{a, b}{A \code{numeric} vector.}
}
\value{
A \code{numeric} vector of length \eqn{N_a + N_b}.
}
\description{
Implements the convolution function as a \emph{C++} routine surfaced by \emph{Rcpp}.
}
\examples{

convolve_cpp(1:5, 5:1)

}
