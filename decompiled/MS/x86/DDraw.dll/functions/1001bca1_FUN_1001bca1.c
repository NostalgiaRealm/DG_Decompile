/*
 * FUN_1001bca1 at 1001bca1
 * undefined __thiscall FUN_1001bca1(void * this, undefined1 param_1)
 * Address ranges: 1001bca1-1001bd7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001bca1(void *this,undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *this_00;
  
  iVar6 = *(int *)(*(int *)((int)this + 0x24) + 8) * 0x16c0 + *(int *)((int)this + -0x80);
  uVar3 = FUN_1001b62c((int)this + -0xc0);
  this_00 = (int *)(iVar6 + 0x1880);
  uVar1 = *(undefined4 *)((int)this + 0x20);
  uVar2 = *(undefined4 *)((int)this + -0x80);
  FUN_1005f770(this_00);
  if (*(char *)(iVar6 + 0x19ac) != '\0') {
    puVar4 = (undefined4 *)FUN_1005f690(this_00,0x10);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar6 + 0x19a8) = *(int *)(iVar6 + 0x19a8) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4[4] = uVar1;
      *(undefined1 *)(puVar4 + 5) = param_1;
      puVar5 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_1001bd7d;
      this_00[*(int *)(iVar6 + 0x19a4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar6 + 0x19ad) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar6 + 0x18e0));
        return;
      }
      goto LAB_1001bd70;
    }
    FUN_1000f2b0(this_00);
  }
  puVar4 = *(undefined4 **)(iVar6 + 0x1990);
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uVar1;
  *(undefined1 *)(puVar4 + 3) = param_1;
  FUN_1001bd7d(puVar4);
LAB_1001bd70:
  *this_00 = 0;
  return;
}

