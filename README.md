# Flight-Site

Built this mockup for an art test for an apprenticeship with 8th light University. This is a mock-up of a travel website for the purpose of gaining an apprenticeship with 8th light University.

# Intro

This is a mockup for a flight booking website I created during an art test For 8th Light University. The art test asked for me to develop a flight booking website that did not have to have functionality.

# View

If you like to take a look at the project go to this URLs https://rashadmad.github.io/Flight-Site/ .

# Insights

I really fell in love with _SASS_ and ended up losing my self in it during this project. though the project had no deadline the hiring management changed and so did the art test. I missed my opportunity to use this to gain an internship, but am still proud of the finished product. At the moment I am working on another art test with 8th light this time I will get it in a bit quicker.

#### What I learned about sass

Even though this was a small scale project, I can see how **SASS** would be a great tool for very complex apps. I used **SASS** variables during this project to assist in developing functionality over multiple pages without the writing code over and over again with tedium. Ironically I found compass has most of the functionality already installed so next time I would just use them. As I grow as a developer learning more and more not to reinvent the wheel.

#### Responsive Design & SASS

The thing that I am most proud of from this project is its responsive design. **SASS** is a very powerful tool for developing a responsive experience. Here is an example of me using _sass_ to develop the grid system for the site.

```scss
  @mixin row() {
    font-size: 0 !important;
  }

  @mixin col($col, $sum, $gap: .9%, $align: top, $padding: 8px) {
    width: percentage($col/$sum) - ($gap);
    padding: $padding;
    font-size: 14px;
    display: inline-block;
    vertical-align: $align;
    @include margin_system($top:.9%,$bottom:.9%);
    margin-right: $gap;
      -webkit-box-sizing: border-box;
      -moz-box-sizing: border-box;
      box-sizing: border-box;
    &:first-child{
      margin-left: 0;
    }
    &:last-child{
      margin-right: 0;
    }
  }

  .row{
    @include row();
  }

  .full{
    @include col(1,1);
  }

  .half{
    @include col(1,2);
  }

  .third{
    @include col(1,3);
  }

  .fourth{
    @include col(1,4);
  }

  .sixteen{
    @include col(16,100)
  }

  .fith{
    @include col(1,5);
  }
```


## What I enjoyed

Well pushing the limits of sass. My intent was to create a set of mixins and variables that would make creating sites likes this one much easier. I think That I succeeded In creating something modular and easy to teach.

# Instructions

If you would like to learn from how I attacked the project just fork this project to your repo.

# Contributing

This instance of the project was done by me Rashad J Madison

developed for 8th light University https://8thlight.com/.

some credit to [SARAH DRASNERL](https://css-tricks.com/author/sdrasner/) I used her code for some of my animations.

I will most likely not accept pull requests.
For details, check out https://github.com/udacity/fend-project-memory-game.
