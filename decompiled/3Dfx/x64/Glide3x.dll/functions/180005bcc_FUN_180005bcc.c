/*
 * FUN_180005bcc at 180005bcc
 * undefined __fastcall FUN_180005bcc(longlong param_1, undefined8 * param_2)
 * Address ranges: 180005bcc-180005c4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005bcc(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))();
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  _DAT_18006d9f0 = *param_2;
  _DAT_18006d9f8 = param_2[1];
  _DAT_18006da00 = param_2[2];
  _DAT_18006da08 = param_2[3];
  _DAT_18006da10 = param_2[4];
  _DAT_18006da18 = param_2[5];
  _DAT_18006da20 = param_2[6];
  _DAT_18006da28 = param_2[7];
  _DAT_18006da30 = param_2[8];
  _DAT_18006da38 = param_2[9];
  _DAT_18006da40 = param_2[10];
  _DAT_18006da48 = param_2[0xb];
  _DAT_18006da50 = param_2[0xc];
  _DAT_18006da58 = param_2[0xd];
  return;
}

