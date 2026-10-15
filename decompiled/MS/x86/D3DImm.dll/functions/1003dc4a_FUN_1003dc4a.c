/*
 * FUN_1003dc4a at 1003dc4a
 * undefined4 __thiscall FUN_1003dc4a(void * this, int param_1, int param_2)
 * Address ranges: 1003dc4a-1003dd23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003dc4a(void *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *extraout_ECX;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = FUN_10008dc3((int)this);
  if ((char)uVar3 == '\0') {
    uVar6 = 0;
    do {
      cVar1 = *(char *)(param_1 + 0x5d + uVar6 * 0xc);
      if (cVar1 != '\0') {
        if (*(char *)(param_2 + 0x4c + uVar6 * 8) == -1) {
          return 0x88760800;
        }
        if (*(char *)(param_2 + 0x4d + uVar6 * 8) != cVar1) {
          return 0x88760800;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  else {
    uVar6 = 7;
    pvVar5 = extraout_ECX;
    do {
      if (*(char *)(param_2 + 0x14 + uVar6 * 8) != -1) {
        iVar4 = (uVar6 - 7) * 100;
        if (*(int *)((int)pvVar5 + iVar4 + 0x4f8) == 1) {
          if (*(char *)(param_1 + 0x5d + (uVar6 - 7) * 0xc) != *(char *)(param_2 + 0x15 + uVar6 * 8)
             ) {
            return 0x88760800;
          }
        }
        else {
          uVar2 = *(uint *)((int)pvVar5 + iVar4 + 0x520);
          uVar7 = 3;
          if (((uVar2 & 0x30000) == 0) &&
             (uVar7 = (uint)*(byte *)(param_1 + 0x5d + uVar2 * 0xc), uVar7 == 0)) {
            return 0x80004005;
          }
          if (*(uint *)(&DAT_1005e848 + (uint)*(byte *)((int)pvVar5 + iVar4 + 0x554) * 4) != 0) {
            uVar7 = *(uint *)(&DAT_1005e848 + (uint)*(byte *)((int)pvVar5 + iVar4 + 0x554) * 4);
          }
          pvVar5 = this;
          if (uVar7 != *(byte *)(param_2 + 0x15 + uVar6 * 8)) {
            return 0x88760800;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xf);
  }
  return 0;
}

