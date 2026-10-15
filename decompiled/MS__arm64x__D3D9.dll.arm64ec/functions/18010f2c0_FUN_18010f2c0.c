/*
 * FUN_18010f2c0 at 18010f2c0
 * undefined FUN_18010f2c0(void)
 * Address ranges: 18010f2c0-18010f47b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18010f2c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,byte param_7)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_5;
  uStack_48 = param_4;
  uVar3 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar3 & 0xffffffff);
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  iVar2 = (int)uVar3;
  if ((uVar3 & 0x80000000) != 0) {
    iVar2 = (int)uVar4;
  }
  if (((param_7 & 1) == 0) || (bVar6 = true, *(short *)(param_3 + 0x11) != *(short *)(param_3 + 5)))
  {
    bVar6 = false;
  }
  uVar9 = uVar4;
  if (((iVar2 < 0) || (cVar7 = *(char *)(param_3 + 0x10), cVar7 != '\0' && cVar7 != '\x0f')) ||
     (*(char *)(param_3 + 0x13) != -0x3d || bVar6)) {
    if (bVar6) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *(undefined2 *)(param_3 + 0x11);
    }
    if ((*(char *)(param_3 + 0x13) != -0x3d) ||
       (bVar6 = true, *(char *)(param_3 + 0x10) != '\0' && *(char *)(param_3 + 0x10) != '\x0f')) {
      bVar6 = false;
    }
    if (!bVar6) {
      uVar8 = 0xffff;
    }
    iVar2 = FUN_18010eb78(param_1,param_2,uVar8);
    FUN_1801060c0(param_2,0x290200100100,iVar2,uVar3 & 0xffffffff,uVar3 >> 0x20,0);
    cVar7 = *(char *)(param_3 + 0x10);
  }
  else if ((uVar3 & 0x80000000) != 0) {
    uVar9 = uVar3;
    uVar3 = uVar4;
  }
  puVar1 = &local_50;
  if (cVar7 != '\x01') {
    puVar1 = &uStack_48;
  }
  FUN_1801060c0(param_2,*puVar1,iVar2,uVar9 & 0xffffffff,uVar9 >> 0x20,param_6);
  uVar5 = FUN_18010f108(param_1,uVar9 & 0xffffffff);
  FUN_18010f108(uVar5,uVar3 & 0xffffffff);
  return iVar2;
}

