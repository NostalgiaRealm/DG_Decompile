/*
 * FUN_1003eba2 at 1003eba2
 * undefined __thiscall FUN_1003eba2(void * this, char param_1)
 * Address ranges: 1003eba2-1003ed1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003eba2(void *this,char param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar5 = 0;
  do {
    FUN_100419b7(this,uVar5,(int *)0x0,(int *)0x0);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  (**(code **)(**(int **)((int)this + 0x14) + 0x4c))(1,1,&local_28,&local_1c);
  if ((*(int *)((int)this + 0xa74) != 0) &&
     (*(undefined4 *)(*(int *)((int)this + 0xa74) + 0x10) = 0, param_1 != '\0')) {
    (**(code **)(**(int **)((int)this + 0xa74) + 0x2c))(1,0);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  iVar4 = *(int *)(*(int *)((int)this + 0xa70) + 0xc);
  if (*(char *)(iVar4 + 0x1efc) != '\0') {
    uVar5 = *(uint *)(iVar4 + 0xa0);
    uVar3 = 0;
    if (uVar5 != 0) {
      do {
        if (this == *(void **)(*(int *)(iVar4 + 0x9c) + uVar3 * 4)) {
          if (uVar3 < uVar5) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar5) {
              *(undefined4 *)(*(int *)(iVar4 + 0x9c) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)(iVar4 + 0x9c) + uVar3 * 4);
              uVar5 = *(uint *)(iVar4 + 0xa0);
            }
            *(uint *)(iVar4 + 0xa0) = uVar5 - 1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  FUN_1003f218(this);
  uVar5 = 0;
  do {
    iVar4 = uVar5 * 0x1c;
    puVar1 = *(undefined4 **)((int)this + iVar4 + 0x9fc);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1003da94((int)this + iVar4 + 0x9e4,puVar1);
      *(undefined4 *)((int)this + iVar4 + 0x9fc) = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  (**(code **)(*(int *)this + 4))(1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

