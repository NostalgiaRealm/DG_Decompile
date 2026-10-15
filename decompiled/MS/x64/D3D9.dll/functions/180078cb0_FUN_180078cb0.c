/*
 * FUN_180078cb0 at 180078cb0
 * undefined8 * __fastcall FUN_180078cb0(undefined8 param_1, undefined8 * param_2, undefined8 * param_3, ulonglong param_4)
 * Address ranges: 180078cb0-180078d5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_180078cb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  char local_4a78 [16];
  char acStack_4a68 [19032];
  undefined8 uStack_10;
  
  uStack_10 = 0x180078cc0;
  FUN_1800fbec0((undefined8 *)local_4a78,param_3,0x4a70);
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  uVar2 = 0;
  do {
    uVar1 = uVar4;
    if (((acStack_4a68[uVar2] != '\0') && (uVar1 = (uint)uVar2, local_4a78[uVar2] != '\0')) &&
       (uVar1 = uVar4, local_4a78[uVar2] == '0')) {
      uVar3 = uVar2;
    }
    uVar4 = uVar1;
    uVar1 = (uint)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if ((int)uVar3 != -1) {
    if ((uVar4 != 0xffffffff) && ((param_4 >> 9 & 1) != 0)) {
      acStack_4a68[uVar4] = '\a';
    }
    if ((param_4 >> 10 & 1) != 0) {
      acStack_4a68[uVar3] = '\a';
    }
  }
  FUN_1800fbec0(param_2,(undefined8 *)local_4a78,0x4a70);
  return param_2;
}

