/*
 * FUN_10088a84 at 10088a84
 * undefined4 __thiscall FUN_10088a84(void * this, char param_1)
 * Address ranges: 10088a84-10088b6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10088a84(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_68 [4];
  undefined4 local_58 [6];
  undefined4 local_40 [7];
  int local_24 [5];
  int local_10;
  void *local_c;
  
  if (param_1 == '\0') {
    uVar5 = *(undefined4 *)((int)this + 0x38);
  }
  else {
    if (*(int *)((int)this + 0x3c) == -1) {
      local_c = this;
      piVar3 = FUN_1008f0a2(*(void **)((int)this + 0x10),local_40);
      piVar4 = local_24;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      if (local_24[1] == 0x1c) {
        local_68[0] = 0x1d;
      }
      else if (local_24[1] == 0x47) {
        local_68[0] = 0x48;
      }
      else if (local_24[1] == 0x4a) {
        local_68[0] = 0x4b;
      }
      else {
        local_68[0] = local_24[1];
        if (local_24[1] == 0x4d) {
          local_68[0] = 0x4e;
        }
      }
      iVar6 = *(int *)((int)this + 0x30);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar2 = *(int *)(iVar6 + 0x1cf00);
      uVar8 = *(int *)((int)local_c + 0x38) + 1;
      *(uint *)((int)local_c + 0x3c) = uVar8;
      local_68[1] = 8;
      local_68[2] = 0x1688;
      puVar9 = local_58;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_58[0] = 0;
      local_58[2] = 0;
      local_58[1] = 0xffffffff;
      iVar6 = *(int *)(iVar6 + 0x14);
      piVar4 = FUN_100ba192(*(void **)(iVar1 * 0x16c0 + iVar2 + 0x1c98),&local_10,uVar8,0);
      this = local_c;
      piVar3 = *(int **)(iVar6 * 0x18 + 0x520 + iVar2);
      (**(code **)(*piVar3 + 0x48))(piVar3,*(undefined4 *)((int)local_c + 0x34),local_68,*piVar4);
    }
    uVar5 = *(undefined4 *)((int)this + 0x3c);
  }
  return uVar5;
}

