/*
 * FUN_1800098a4 at 1800098a4
 * undefined8 __fastcall FUN_1800098a4(longlong param_1, uint param_2, RECT * param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, RECT * param_8)
 * Address ranges: 1800098a4-1800099a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800098a4(longlong param_1,uint param_2,RECT *param_3,uint param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,RECT *param_8)

{
  undefined8 uVar1;
  uint local_res18 [4];
  RECT local_38;
  
  uVar1 = 0x8876086c;
  if ((((param_3 == (RECT *)0x0) || (param_2 != 0)) &&
      (((param_4 & 2) == 0 || (*(longlong *)(param_1 + 0x50) != 0)))) &&
     (((param_4 & 4) == 0 || (*(char *)(param_1 + 0x2cc) != '\0')))) {
    if ((*(char *)(param_1 + 0x6819) == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_1800fa780(local_res18);
      local_38._0_8_ = *(undefined8 *)(param_1 + 0x58);
      local_38.right = (int)*(undefined8 *)(param_1 + 0x60) + local_38.left;
      local_38.bottom = (int)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20) + local_38.top;
      if (*(int *)(param_1 + 0x730) != 0) {
        IntersectRect(&local_38,&local_38,param_8);
      }
      FUN_18001e0a8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_38);
      FUN_1800fa7bc();
    }
    uVar1 = 0;
  }
  return uVar1;
}

