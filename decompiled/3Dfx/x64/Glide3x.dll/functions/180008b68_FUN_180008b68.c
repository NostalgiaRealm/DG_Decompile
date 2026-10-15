/*
 * FUN_180008b68 at 180008b68
 * undefined __fastcall FUN_180008b68(longlong param_1, int param_2, uint param_3, uint param_4, int param_5, int param_6, uint param_7, uint param_8, undefined8 * param_9, int param_10, int param_11)
 * Address ranges: 180008b68-180008d5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008b68(longlong param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                  uint param_7,uint param_8,undefined8 *param_9,int param_10,int param_11)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if ((((((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) && (param_10 <= param_11))
          && (-1 < param_10)) && ((param_5 < 9 && ((int)param_4 < 9)))) &&
        ((param_7 < 0x10 && (param_6 + 3U < 7)))) &&
       ((param_8 == 3 || ((param_4 & 1) == (uint)(param_8 != 1))))) {
      uVar6 = param_3 & 0xfffffff8;
      for (; (int)param_4 < param_5; param_5 = param_5 + -1) {
        iVar4 = FUN_180005928(param_8,param_5,param_5,param_6,param_7);
        uVar6 = uVar6 + iVar4;
      }
      lVar3 = *(longlong *)(param_1 + 0x18);
      uVar1 = *(uint *)((longlong)param_2 * 0x4e8 + 0x334 + lVar3);
      if (uVar6 < uVar1) {
        uVar2 = *(uint *)(&DAT_180063968 + (longlong)(int)param_4 * 4);
        uVar7 = uVar2 >> ((&DAT_180063963)[param_6] & 0x1f);
        if (uVar2 >> ((&DAT_180063963)[param_6] & 0x1f) == 0) {
          uVar7 = 1;
        }
        uVar8 = uVar7;
        if (-1 < param_6) {
          uVar8 = uVar2;
          uVar2 = uVar7;
        }
        iVar4 = ((uVar8 << 0x10 | uVar2) >> 0x10) * (uint)(byte)(&DAT_180063998)[(int)param_7];
        uVar7 = ((param_11 - param_10) + 1) * iVar4;
        uVar2 = uVar1 - uVar6;
        if (uVar7 + uVar6 <= uVar1) {
          uVar2 = uVar7;
        }
        uVar6 = *(int *)((longlong)param_2 * 0x4e8 + 0x330 + lVar3) + iVar4 * param_10 + uVar6;
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x328) + (ulonglong)uVar6);
        FUN_180061330(puVar5,param_9,(ulonglong)uVar2);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x290))
                  (*(longlong **)(param_1 + 0x18),puVar5,uVar6,uVar2);
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

