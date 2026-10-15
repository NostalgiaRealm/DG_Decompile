/*
 * FUN_10026588 at 10026588
 * undefined __thiscall FUN_10026588(void * this, undefined4 * param_1)
 * Address ranges: 10026588-10026668
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026588(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *this_00;
  
  FUN_100210e5((int)this + 0x3440);
  iVar1 = *(int *)((int)this + 0x3188);
  uVar2 = *(uint *)((int)this + 0xd8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    iVar4 = (uVar2 + 3 & 0xfffffffc) + 8;
    puVar3 = (undefined4 *)FUN_10036000(this_00,iVar4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = iVar4;
      puVar3[3] = this;
      puVar5 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
      puVar3[2] = puVar5;
      FUN_100500b0(puVar5,param_1,uVar2);
      puVar5 = (undefined4 *)((int)puVar5 + (uVar2 + 3 & 0xfffffffc));
      *puVar5 = 0;
      *puVar3 = FUN_10026669;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1002665c;
    }
    FUN_10021ec0(this_00);
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar3 = param_1;
  puVar3[1] = this;
  FUN_10026669(puVar3);
LAB_1002665c:
  *this_00 = 0;
  return;
}

