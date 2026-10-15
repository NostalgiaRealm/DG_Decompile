/*
 * FUN_18009e614 at 18009e614
 * ulonglong __fastcall FUN_18009e614(longlong param_1, int param_2, int param_3)
 * Address ranges: 18009e614-18009e6b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18009e614(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffa8;
  RECT local_38;
  
  plVar1 = (longlong *)(param_1 + -0x100);
  uVar2 = FUN_18009dc78((longlong)plVar1,param_2,param_3);
  bVar3 = (byte)param_2;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = FUN_1800ac71c((longlong)plVar1,*(uint *)(param_1 + -0xdc),bVar3);
  local_38.bottom = FUN_1800ac758((longlong)plVar1,*(uint *)(param_1 + -0xd8),bVar3);
  lVar4 = *plVar1;
  (**(code **)(lVar4 + 0x18))(plVar1,param_3 * *(int *)(param_1 + -0xc4) + param_2,&local_38);
  FUN_18009b92c((longlong)plVar1,(uint *)(param_1 + -0xa0),param_1 + -0x50,lVar4,
                in_stack_ffffffffffffffa8,param_2,param_3,&local_38);
  return uVar2 & 0xffffffff;
}

