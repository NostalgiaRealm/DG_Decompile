/*
 * _guTexAllocateMemory@60 at 180002e70
 * int __fastcall _guTexAllocateMemory@60(int param_1, uint param_2, undefined4 param_3, undefined4 param_4, uint param_5, undefined4 param_6, int param_7, uint param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined8 param_13, undefined4 param_14, undefined4 param_15)
 * Address ranges: 180002e70-18000302c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexAllocateMemory_60
              (int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined4 param_6,int param_7,uint param_8,int param_9,undefined4 param_10,
              undefined4 param_11,undefined4 param_12,undefined8 param_13,undefined4 param_14,
              undefined4 param_15)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
                    /* 0x2e70  131  _guTexAllocateMemory@60
                       0x2e70  292  guTexAllocateMemory */
  lVar7 = (longlong)param_1;
  puVar5 = FUN_180015384();
  iVar8 = -1;
  iVar3 = -1;
  if (puVar5[100] != '\0') {
    LOCK();
    *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
    UNLOCK();
    lVar2 = *(longlong *)(puVar5 + 0xa0);
    if (((lVar2 != 0) && (iVar8 = iVar3, param_1 < *(int *)(*(longlong *)(puVar5 + 0x30) + 0x833)))
       && (uVar1 = *(uint *)(puVar5 + 0xa8), uVar1 < 0x400)) {
      iVar3 = FUN_180017d78(param_2 & 0xff,param_7,param_8,param_9,param_5);
      uVar9 = *(int *)(puVar5 + lVar7 * 4 + 0xac) + iVar3 + 7 & 0xfffffff8;
      uVar4 = FUN_18001706c((longlong)puVar5,param_1);
      if (uVar9 <= uVar4) {
        lVar6 = (ulonglong)uVar1 * 0xd0;
        *(int *)(lVar6 + 0x10 + lVar2) = param_9;
        *(uint *)(lVar6 + 0x20 + lVar2) = param_5;
        *(undefined4 *)(lVar6 + 0x24 + lVar2) = param_6;
        *(undefined4 *)(lVar6 + 0x28 + lVar2) = param_12;
        *(undefined4 *)(lVar6 + 0x2c + lVar2) = param_12;
        *(undefined4 *)(lVar6 + 0x30 + lVar2) = param_10;
        *(undefined4 *)(lVar6 + 0x34 + lVar2) = param_11;
        *(undefined4 *)(lVar6 + 0x38 + lVar2) = 0x44454745;
        *(undefined4 *)(lVar6 + 0x3c + lVar2) = 0x44454745;
        *(int *)(lVar6 + 0x44 + lVar2) = param_7;
        *(uint *)(lVar6 + 0x48 + lVar2) = param_8;
        *(uint *)(lVar6 + 0x50 + lVar2) = param_2 & 0xff;
        *(undefined4 *)(lVar6 + 0x40 + lVar2) = param_14;
        *(undefined4 *)(lVar6 + lVar2) = 0;
        *(undefined4 *)(lVar6 + 4 + lVar2) = 1;
        *(undefined4 *)(lVar6 + 8 + lVar2) = param_3;
        *(undefined4 *)(lVar6 + 0xc + lVar2) = param_4;
        *(undefined8 *)(lVar6 + 0x18 + lVar2) = 0;
        *(int *)(lVar6 + 0x4c + lVar2) = param_1;
        *(undefined4 *)(lVar6 + 0x54 + lVar2) = *(undefined4 *)(puVar5 + lVar7 * 4 + 0xac);
        *(undefined4 *)(lVar6 + 0x58 + lVar2) = param_15;
        *(uint *)(puVar5 + lVar7 * 4 + 0xac) = uVar9;
        iVar8 = *(int *)(puVar5 + 0xa8);
        *(int *)(puVar5 + 0xa8) = iVar8 + 1;
      }
    }
    LOCK();
    *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + -1;
    UNLOCK();
  }
  return iVar8;
}

