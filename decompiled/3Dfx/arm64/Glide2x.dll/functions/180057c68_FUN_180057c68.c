/*
 * FUN_180057c68 at 180057c68
 * undefined4 __cdecl FUN_180057c68(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 180057c68-180057c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180057c68(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint extraout_w1;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = (ulonglong)param_3;
  iVar5 = 2;
  if (param_4 != 1) {
    iVar5 = 3;
  }
  uVar3 = FUN_180057130(param_1,(int)param_2);
  if (((int)uVar3 == -1) ||
     (*(uint *)(param_1 + (uVar3 & 0xffffffff) * 0x10 + 0x128) <= (uint)uVar4)) {
    uVar2 = 0;
  }
  else {
    lVar7 = ((uVar3 & 0xffffffff) + 0x12) * 0x10;
    lVar6 = *(longlong *)(param_1 + lVar7);
    lVar1 = (uVar4 & 0xffffffff) * 8;
    if ((*(int *)(lVar1 + lVar6) == 0) || (*(int *)(lVar1 + lVar6 + 4) != iVar5)) {
      FUN_180057168(param_1,extraout_w1,uVar4,iVar5);
    }
    uVar2 = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + lVar7));
  }
  return uVar2;
}

