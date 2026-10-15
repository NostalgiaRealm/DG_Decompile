/*
 * FUN_1800216c8 at 1800216c8
 * undefined __fastcall FUN_1800216c8(longlong param_1, undefined8 * param_2, uint param_3, int param_4)
 * Address ranges: 1800216c8-180021780
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800216c8(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_48 [10];
  
  uVar3 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3380) + 0x70))
                    (*(longlong **)(param_1 + 0x3380),local_48);
  if (((-1 < iVar2) && (local_48[0] == 4)) &&
     (cVar1 = FUN_180045cec(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3380),uVar3), cVar1 != '\0')) {
    FUN_18004be24(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(longlong **)(param_1 + 0x3380),param_3,param_3 + param_4,param_2,'\0');
    return;
  }
  FUN_18004c030(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3380),
                (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),param_3,param_3 + param_4,
                param_2);
  return;
}

