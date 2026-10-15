/*
 * FUN_18002f20c at 18002f20c
 * undefined __fastcall FUN_18002f20c(longlong param_1, undefined8 * param_2, uint param_3, int param_4)
 * Address ranges: 18002f20c-18002f2c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f20c(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_48 [10];
  
  uVar3 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3200) + 0x70))
                    (*(longlong **)(param_1 + 0x3200),local_48);
  if (((-1 < iVar2) && (local_48[0] == 4)) &&
     (cVar1 = FUN_180043b88(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3200),uVar3), cVar1 != '\0')) {
    FUN_180049cc0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong **)(param_1 + 0x3200),param_3,param_3 + param_4,param_2,'\0');
    return;
  }
  FUN_180049ecc(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x3200),
                (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),param_3,param_3 + param_4,
                param_2);
  return;
}

