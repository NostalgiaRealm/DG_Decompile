/*
 * FUN_1800301fc at 1800301fc
 * undefined8 __fastcall FUN_1800301fc(uint * param_1, uint * param_2, char param_3)
 * Address ranges: 1800301fc-1800303bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800301fc(uint *param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  bool bVar2;
  uint7 extraout_var;
  undefined8 uVar3;
  longlong lVar4;
  uint7 extraout_var_00;
  uint7 uVar5;
  
  bVar2 = FUN_18002782c((longlong)param_1,param_2,param_3);
  uVar5 = extraout_var;
  if (bVar2) {
    param_1[0x4c] = 0xffffffff;
    param_1[0x4b] = 0xffffffff;
    param_1[0x4a] = 0xffffffff;
    param_1[0x58] = 0xffffffff;
    param_1[0x57] = 0xffffffff;
    param_1[0x56] = 0xffffffff;
    param_1[0x41] = 0xffffffff;
    param_1[0x40] = 0xffffffff;
    param_1[0x3b] = 0xffffffff;
    param_1[0x3a] = 0xffffffff;
    if (param_1[2] != 9) {
      puVar1 = param_1 + 0x36;
      uVar3 = FUN_18002fa64(param_1,(ulonglong)*param_2,param_2[1],param_2[2],(undefined8 *)puVar1,
                            (longlong *)(param_1 + 0x38),param_1 + 0x3a,param_1 + 0x3b);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_18002f584(param_1,(longlong *)(param_1 + 0x44),(ulonglong)param_2[3],param_2[4],
                              0x35,0x39,param_2[5] * 2);
        if ((char)uVar3 != '\0') {
          lVar4 = FUN_18002f584(param_1,(longlong *)(param_1 + 0x50),(ulonglong)param_2[3],
                                param_2[4],0x27,0x2a,param_2[5] << 2);
          if ((char)lVar4 != '\0') {
            if ((param_3 == '\0') ||
               (lVar4 = FUN_18002fea8(param_1,(ulonglong)*param_2,param_2[1],param_2[2],
                                      (char)param_2[10],(longlong *)(param_1 + 0x3e),param_1 + 0x40,
                                      param_1 + 0x41), (char)lVar4 != '\0')) {
              if (*(longlong *)puVar1 != 0) {
                lVar4 = *(longlong *)(param_1 + 0x30);
                *(ulonglong *)puVar1 =
                     *(longlong *)puVar1 +
                     (ulonglong)*(uint *)(lVar4 + 0x30 + (ulonglong)*param_1 * 0x28);
              }
              return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            }
            FUN_18002f930((longlong)param_1,(ulonglong *)(param_1 + 0x50));
          }
          FUN_18002f930((longlong)param_1,(ulonglong *)(param_1 + 0x44));
        }
        FUN_18002fd84((longlong)param_1);
      }
    }
    FUN_18002792c((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
    uVar5 = extraout_var_00;
  }
  return (ulonglong)uVar5 << 8;
}

