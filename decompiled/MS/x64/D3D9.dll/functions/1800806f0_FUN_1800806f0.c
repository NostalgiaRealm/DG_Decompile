/*
 * FUN_1800806f0 at 1800806f0
 * undefined __fastcall FUN_1800806f0(undefined8 * param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 1800806f0-180080d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800806f0(undefined8 *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint local_48;
  
  uVar3 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((uVar3 >> 0x1a & 1) == 0) {
    if ((*(byte *)(param_3 + 0x1ac) & 2) == 0) {
      if (*(char *)(param_3 + 0x1c8) == '\0') {
        FUN_18007e5fc(param_1,param_3,param_2,0x36,3,8,*(uint *)(param_3 + 0xb8));
      }
    }
    else {
      uVar3 = FUN_180084194(param_1,param_2,param_3);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,4,1,uVar3);
      uVar3 = FUN_180084194(param_1,param_2,param_3);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,3,8,uVar3);
      *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    }
    goto LAB_180080c0f;
  }
  uVar2 = *(uint *)(param_3 + 0x164);
  uVar4 = 0;
  uVar3 = uVar3 >> 0x18 & 3;
  if (((uVar3 == 1) || (uVar3 == 2)) || (local_48 = uVar2, uVar3 == 3)) {
    uVar3 = param_4;
    if (param_4 == 0) {
      uVar3 = FUN_1800ec8c0(param_3 + 0x20,1,'\x01');
    }
    uVar4 = (ulonglong)uVar3;
    local_48 = param_4;
    if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x8000000) == 0) &&
       (local_48 = uVar2, (*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x10000000) != 0)) {
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x10,uVar4);
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x4b,uVar4);
      local_48 = uVar3;
    }
  }
  uVar3 = (uint)uVar4;
  uVar2 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) >> 0x18 & 3;
  if (uVar2 == 0) {
LAB_180080a43:
    uVar3 = 0;
    if ((*(byte *)(param_3 + 0x1ac) & 2) != 0) {
      uVar3 = FUN_180084194(param_1,param_2,param_3);
    }
  }
  else {
    if ((uVar2 == 1) || (uVar2 == 2)) {
      puVar1 = (uint *)(param_3 + 0x20);
      FUN_1800edbe0(puVar1,param_2,0x38,uVar4);
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x3000000) == 0x2000000) {
        FUN_1800edbe0(puVar1,param_2,0x38,uVar4);
      }
      FUN_1800edbe0(puVar1,param_2,0x38,uVar4);
      FUN_1800edbe0(puVar1,param_2,0x19,uVar4);
      if (*puVar1 != 0x10040) {
        FUN_1800edbe0(puVar1,param_2,0x81,uVar4);
        goto LAB_180080a66;
      }
    }
    else {
      if (uVar2 != 3) goto LAB_180080a43;
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0,uVar4);
    }
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0xe,uVar4);
  }
LAB_180080a66:
  if (uVar3 == 0) {
    FUN_18007e5fc(param_1,param_3,param_2,0x36,3,8,*(uint *)(param_3 + 0xb8));
LAB_180080be0:
    if (uVar3 != *(uint *)(param_3 + 0x1a8)) {
      FUN_1800ec960(param_3 + 0x20,uVar3);
    }
  }
  else {
    if (*(char *)(param_3 + 0x74) == '\0') {
      FUN_18007e5fc(param_1,param_3,param_2,0x2036,4,1,uVar3);
      FUN_18007e5fc(param_1,param_3,param_2,0x2036,3,8,uVar3);
    }
    else {
      uVar2 = FUN_1800ec8c0(param_3 + 0x20,1,'\x01');
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x2036,(ulonglong)uVar2);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,4,1,uVar2);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,3,8,uVar2);
      FUN_1800ec960(param_3 + 0x20,uVar2);
    }
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 1;
    if ((uVar3 & 0x3f00) == 0) goto LAB_180080be0;
  }
  if (local_48 != *(uint *)(param_3 + 0x164)) {
    FUN_1800ec960(param_3 + 0x20,local_48);
  }
LAB_180080c0f:
  FUN_1800ec960(param_3 + 0x20,param_4);
  return;
}

