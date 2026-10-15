/*
 * FUN_1007232f at 1007232f
 * undefined __thiscall FUN_1007232f(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1007232f-10072416
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007232f(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *this_00;
  
  iVar6 = *(int *)(*(int *)((int)this + 0x24) + 8) * 0x16c0 + *(int *)((int)this + -0x80);
  uVar3 = FUN_10071de9((int)this + -0xc0);
  this_00 = (int *)(iVar6 + 0x1880);
  uVar1 = *(undefined4 *)((int)this + 0x20);
  uVar2 = *(undefined4 *)((int)this + -0x80);
  FUN_100abd50(this_00);
  if (*(char *)(iVar6 + 0x19ac) != '\0') {
    puVar4 = (undefined4 *)FUN_100abc70(this_00,0x14);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar6 + 0x19a8) = *(int *)(iVar6 + 0x19a8) + 1;
      UNLOCK();
      puVar4[1] = 0x14;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4[4] = uVar1;
      puVar4[5] = param_1;
      puVar4[6] = param_2;
      puVar5 = (undefined4 *)((int)puVar4 + 0x1fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_10072417;
      this_00[*(int *)(iVar6 + 0x19a4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar6 + 0x19ad) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar6 + 0x18e0));
        return;
      }
      goto LAB_1007240a;
    }
    FUN_1002f90d(this_00);
  }
  puVar4 = *(undefined4 **)(iVar6 + 0x1990);
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uVar1;
  puVar4[3] = param_1;
  puVar4[4] = param_2;
  FUN_10072417(puVar4);
LAB_1007240a:
  *this_00 = 0;
  return;
}

