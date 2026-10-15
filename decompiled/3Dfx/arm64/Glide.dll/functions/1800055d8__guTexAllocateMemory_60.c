/*
 * _guTexAllocateMemory@60 at 1800055d8
 * int __cdecl _guTexAllocateMemory@60(undefined4 param_1, int param_2, byte param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, uint param_8, uint param_9, int param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined8 param_14, undefined4 param_15)
 * Address ranges: 1800055d8-1800057ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexAllocateMemory_60
              (undefined4 param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
              uint param_6,undefined4 param_7,uint param_8,uint param_9,int param_10,
              undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined8 param_14,
              undefined4 param_15)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong extraout_x15;
  int iVar10;
  int iVar11;
  
                    /* 0x55d8  131  _guTexAllocateMemory@60
                       0x55d8  292  guTexAllocateMemory */
  lVar5 = FUN_180017788();
  iVar10 = -1;
  if (*(char *)(lVar5 + 100) != '\0') {
    FUN_180061700((uint *)(lVar5 + 0x60));
    lVar8 = *(longlong *)(lVar5 + 0xa0);
    if (((lVar8 != 0) && (param_2 < *(int *)(*(longlong *)(lVar5 + 0x30) + 0x833))) &&
       (uVar3 = *(uint *)(lVar5 + 0xa8), uVar3 < 0x400)) {
      lVar1 = lVar5 + (longlong)param_2 * 4;
      uVar6 = FUN_1800198c0((uint)param_3,(ulonglong)param_8,param_9,param_10,(ulonglong)param_6);
      uVar2 = (int)uVar6 + *(int *)(extraout_x15 + 0xac) + 7U & 0xfffffff8;
      bVar4 = FUN_180017938(lVar5);
      if ((bVar4 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        iVar11 = 0;
        if (param_2 < *(int *)(*(longlong *)(lVar5 + 0x30) + 0x833)) {
          if (*(char *)(lVar5 + 100) == '\0') {
            iVar11 = *(int *)(*(longlong *)(lVar5 + 0x30) + 0x82f);
          }
          else {
            FUN_180061700((uint *)(lVar5 + 0x60));
            iVar11 = *(int *)(*(longlong *)(lVar5 + 0x18) + (longlong)param_2 * 0x4e8 + 700);
            FUN_1800616f0((uint *)(lVar5 + 0x60));
          }
        }
        uVar7 = iVar11 - 0x10;
      }
      if (uVar2 <= uVar7) {
        puVar9 = (undefined8 *)(lVar8 + (ulonglong)uVar3 * 0xd0);
        *puVar9 = 0x100000000;
        *(undefined4 *)(puVar9 + 1) = param_4;
        *(undefined4 *)((longlong)puVar9 + 0xc) = param_5;
        *(int *)(puVar9 + 2) = param_10;
        puVar9[3] = 0;
        *(undefined4 *)(puVar9 + 5) = param_13;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = param_13;
        *(uint *)(puVar9 + 4) = param_6;
        *(undefined4 *)((longlong)puVar9 + 0x24) = param_7;
        *(undefined4 *)(puVar9 + 8) = param_1;
        *(uint *)((longlong)puVar9 + 0x44) = param_8;
        *(uint *)(puVar9 + 9) = param_9;
        *(undefined4 *)(puVar9 + 6) = param_11;
        *(undefined4 *)((longlong)puVar9 + 0x34) = param_12;
        puVar9[7] = 0x4445474544454745;
        *(int *)((longlong)puVar9 + 0x4c) = param_2;
        *(uint *)(puVar9 + 10) = (uint)param_3;
        *(undefined4 *)((longlong)puVar9 + 0x54) = *(undefined4 *)(lVar1 + 0xac);
        *(undefined4 *)(puVar9 + 0xb) = param_15;
        *(uint *)(lVar1 + 0xac) = uVar2;
        iVar10 = *(int *)(lVar5 + 0xa8);
        *(int *)(lVar5 + 0xa8) = iVar10 + 1;
      }
    }
    FUN_1800616f0((uint *)(lVar5 + 0x60));
  }
  return iVar10;
}

