//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                       Copyright 2016-2020, 31337 Investments Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Envelopes_EURUSD_H4_Params : Stg_Envelopes_Params {
  Stg_Envelopes_EURUSD_H4_Params() {
    symbol = "EURUSD";
    tf = PERIOD_H4;
    Envelopes_MA_Period = 6;
    Envelopes_Deviation = 0.2;
    Envelopes_MA_Method = 0;
    Envelopes_MA_Shift = 0;
    Envelopes_Applied_Price = 3;
    Envelopes_Shift = 0;
    Envelopes_SignalOpenMethod = 0;
    Envelopes_SignalOpenLevel = 0;
    Envelopes_SignalCloseMethod = 0;
    Envelopes_SignalCloseLevel = 0;
    Envelopes_PriceLimitMethod = 0;
    Envelopes_PriceLimitLevel = 0;
    Envelopes_MaxSpread = 10;
  }
} stg_env_h4;