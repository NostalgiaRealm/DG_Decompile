/*
 * FUN_180037528 at 180037528
 * undefined8 __fastcall FUN_180037528(uint * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 180037528-180037667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180037528(uint *param_1,undefined4 *param_2,char param_3)

{
  uint *puVar1;
  bool bVar2;
  uint7 extraout_var;
  undefined8 uVar3;
  longlong lVar4;
  uint7 extraout_var_00;
  uint7 uVar5;
  
  bVar2 = FUN_180027cd4((longlong)param_1,param_2,param_3);
  uVar5 = extraout_var;
  if (bVar2) {
    if (param_1[2] != 9) {
      puVar1 = param_1 + 0x34;
      uVar3 = FUN_180037144((longlong)param_1,*param_2,param_2[1],param_2[2],(undefined8 *)puVar1,
                            (undefined8 *)(param_1 + 0x36),(undefined8 *)(param_1 + 0x38),
                            (undefined8 *)(param_1 + 0x3a),(undefined8 *)(param_1 + 0x3c),
                            param_1 + 0x3e);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_180036b54((longlong)param_1,param_2[3],param_2[4],param_2[5]);
        if ((char)uVar3 != '\0') {
          lVar4 = FUN_180036e4c((longlong)param_1,param_2[3],param_2[4],param_2[5]);
          if ((char)lVar4 != '\0') {
            if ((param_3 == '\0') ||
               (lVar4 = FUN_1800373f4((longlong)param_1,*param_2,param_2[1],param_2[2],
                                      *(byte *)(param_2 + 10),(undefined8 *)(param_1 + 0x58),
                                      param_1 + 0x5a), (char)lVar4 != '\0')) {
              if (*(longlong *)puVar1 != 0) {
                lVar4 = *(longlong *)(param_1 + 0x30);
                *(ulonglong *)puVar1 =
                     *(longlong *)puVar1 +
                     (ulonglong)*(uint *)(lVar4 + 0x30 + (ulonglong)*param_1 * 0x28);
              }
              return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            }
            FUN_180037094(param_1);
          }
          FUN_180036d9c(param_1);
        }
        FUN_180037344(param_1);
      }
    }
    FUN_180027dd4((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
    uVar5 = extraout_var_00;
  }
  return (ulonglong)uVar5 << 8;
}

