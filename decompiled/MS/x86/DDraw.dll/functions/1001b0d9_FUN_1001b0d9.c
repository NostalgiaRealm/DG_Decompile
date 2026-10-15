/*
 * FUN_1001b0d9 at 1001b0d9
 * undefined __thiscall FUN_1001b0d9(void * this, undefined4 * param_1)
 * Address ranges: 1001b0d9-1001b19d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001b0d9(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *this_00;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + -0xb8) == 0) {
    return;
  }
  iVar1 = *(int *)((int)this + -0x7c);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1005f770(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1005f690(this_00,0x408);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x408;
      puVar2[3] = (int)this + -0xc0;
      puVar4 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      puVar2[2] = puVar4;
      puVar5 = puVar4;
      for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4[0x100] = 0;
      *puVar2 = FUN_1001b19e;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar4 + 0x100);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001b191;
    }
    FUN_1000f2b0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = param_1;
  puVar2[1] = (int)this + -0xc0;
  FUN_1001b19e(puVar2);
LAB_1001b191:
  *this_00 = 0;
  return;
}

