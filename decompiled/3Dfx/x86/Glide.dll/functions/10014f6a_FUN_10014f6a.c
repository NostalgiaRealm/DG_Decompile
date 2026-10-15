/*
 * FUN_10014f6a at 10014f6a
 * int __thiscall FUN_10014f6a(void * this, int param_1, uint param_2, undefined4 param_3, undefined4 param_4, uint param_5, undefined4 param_6, int param_7, uint param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15)
 * Address ranges: 10014f6a-1001509a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10014f6a(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,int param_7,uint param_8,int param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = -1;
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*(int *)((int)this + 0x5c) != 0) {
      if ((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (*(uint *)((int)this + 0x60) < 0x400)) {
        puVar5 = (undefined4 *)(*(uint *)((int)this + 0x60) * 0xc4 + *(int *)((int)this + 0x5c));
        iVar2 = FUN_10014ea7(param_2 & 0xff,param_7,param_8,param_9,param_5);
        uVar3 = *(int *)((int)this + param_1 * 4 + 100) + 7 + iVar2 & 0xfffffff8;
        uVar4 = FUN_10014298(this,param_1);
        if (uVar4 < uVar3) {
          iVar2 = -1;
        }
        else {
          puVar5[2] = param_3;
          puVar5[3] = param_4;
          puVar5[4] = param_9;
          puVar5[6] = param_5;
          puVar5[7] = param_6;
          puVar5[8] = param_12;
          puVar5[9] = param_12;
          puVar5[10] = param_10;
          puVar5[0xb] = param_11;
          puVar5[0xc] = 0x44454745;
          puVar5[0xd] = 0x44454745;
          puVar5[0xe] = param_14;
          puVar5[0xf] = param_7;
          puVar5[0x10] = param_8;
          puVar5[0x11] = param_1;
          puVar5[0x12] = param_2 & 0xff;
          *puVar5 = 0;
          puVar5[1] = 1;
          puVar5[5] = 0;
          puVar5[0x13] = *(undefined4 *)((int)this + param_1 * 4 + 100);
          puVar5[0x14] = param_15;
          *(uint *)((int)this + param_1 * 4 + 100) = uVar3;
          iVar2 = *(int *)((int)this + 0x60);
          *(int *)((int)this + 0x60) = iVar2 + 1;
        }
      }
      else {
        iVar2 = -1;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return iVar2;
}

