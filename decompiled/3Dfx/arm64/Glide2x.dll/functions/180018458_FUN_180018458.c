/*
 * FUN_180018458 at 180018458
 * undefined __cdecl FUN_180018458(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined8 * param_9, int param_10, int param_11)
 * Address ranges: 180018458-18001863b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018458(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,undefined8 *param_9,int param_10,int param_11)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int extraout_w15;
  longlong lVar11;
  
  if (*(char *)(param_1 + 100) != '\0') {
    uVar4 = FUN_1800608b0((uint *)(param_1 + 0x60));
    if ((((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833) && param_10 <= param_11) &&
          -1 < param_10) &&
        (uVar5 = FUN_180018a30(uVar4,param_4,param_5,param_6,param_7), (uVar5 & 1) != 0)) &&
       (bVar3 = FUN_1800189f0(param_4,param_8), bVar3)) {
      uVar6 = param_3 & 0xfffffff8;
      uVar10 = 0xffffffff;
      if (param_5 < 9) {
        uVar10 = (uint)(byte)(&DAT_180063bb8)[(int)param_5];
      }
      while( true ) {
        uVar7 = 0xffffffff;
        if (param_4 < 9) {
          uVar7 = (uint)(byte)(&DAT_180063bb8)[(int)param_4];
        }
        if ((int)uVar10 <= (int)uVar7) break;
        uVar5 = FUN_180018a70(param_8,(ulonglong)(uint)(&DAT_1800617e8)[(int)uVar10],
                              (&DAT_1800617e8)[(int)uVar10],param_6,(ulonglong)param_7);
        uVar10 = extraout_w15 - 1;
        uVar6 = (int)uVar5 + uVar6;
      }
      lVar8 = *(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x4e8;
      uVar10 = *(uint *)(lVar8 + 700);
      if (uVar6 < uVar10) {
        uVar9 = *(uint *)(&DAT_180063bd0 + (longlong)(int)param_4 * 4);
        uVar7 = uVar9 >> (ulonglong)((byte)(&DAT_180063bc4)[(int)param_6] & 0x1f);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        uVar1 = uVar9;
        if (param_6 - 4 < 3) {
          uVar1 = uVar7;
          uVar7 = uVar9;
        }
        if (param_7 < 0x11) {
          uVar9 = (uint)(byte)(&DAT_180063b68)[(int)param_7];
        }
        else {
          uVar9 = 0;
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2b0);
        iVar2 = ((uVar7 | uVar1 << 0x10) >> 0x10) * uVar9;
        uVar7 = iVar2 + (param_11 - param_10) * iVar2;
        if (uVar10 < uVar7 + uVar6) {
          uVar7 = uVar10 - uVar6;
        }
        uVar6 = *(int *)(lVar8 + 0x2b8) + uVar6 + iVar2 * param_10;
        thunk_FUN_180001218((undefined8 *)(lVar11 + (ulonglong)uVar6),param_9,(ulonglong)uVar7);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x250))
                  (*(longlong **)(param_1 + 0x18),lVar11 + (ulonglong)uVar6,uVar6,(ulonglong)uVar7);
      }
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

