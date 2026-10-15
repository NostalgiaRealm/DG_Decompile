/*
 * FUN_100aa5f0 at 100aa5f0
 * undefined FUN_100aa5f0(void)
 * Address ranges: 100aa5f0-100aa75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100aa5f0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_1012a0bc;
  param_1[3] = &PTR_FUN_10129938;
  param_1[4] = 0;
  param_1[5] = param_2;
  *(undefined8 *)(param_1 + 6) = 0x1b00000000;
  *(undefined8 *)(param_1 + 8) = 0x1c0000001e;
  *(undefined8 *)(param_1 + 10) = 0x1b0000001c;
  *(undefined8 *)(param_1 + 0xc) = 0x1c0000001e;
  param_1[0xe] = 0x1c;
  *(undefined8 *)(param_1 + 0x4026) = 0;
  param_1[0x4028] = 0;
  *(undefined8 *)(param_1 + 0x73bc) = 0;
  *(undefined1 *)(param_1 + 0x73be) = 0;
  *(undefined8 *)(param_1 + 0x738e) = 0;
  *(undefined8 *)(param_1 + 0x738c) = 0;
  *(undefined8 *)(param_1 + 0x7392) = 0;
  *(undefined8 *)(param_1 + 0x7390) = 0;
  *(undefined8 *)(param_1 + 0x7396) = 0;
  *(undefined8 *)(param_1 + 0x7394) = 0;
  *(undefined8 *)(param_1 + 0x739a) = 0;
  *(undefined8 *)(param_1 + 0x7398) = 0;
  *(undefined8 *)(param_1 + 0x739e) = 0;
  *(undefined8 *)(param_1 + 0x739c) = 0;
  *(undefined8 *)(param_1 + 0x73a2) = 0;
  *(undefined8 *)(param_1 + 0x73a0) = 0;
  *(undefined8 *)(param_1 + 0x73a6) = 0;
  *(undefined8 *)(param_1 + 0x73a4) = 0;
  *(undefined8 *)(param_1 + 0x73aa) = 0;
  *(undefined8 *)(param_1 + 0x73a8) = 0;
  *(undefined8 *)(param_1 + 0x73ae) = 0;
  *(undefined8 *)(param_1 + 0x73ac) = 0;
  *(undefined8 *)(param_1 + 0x73b2) = 0;
  *(undefined8 *)(param_1 + 0x73b0) = 0;
  *(undefined8 *)(param_1 + 0x73b6) = 0;
  *(undefined8 *)(param_1 + 0x73b4) = 0;
  *(undefined8 *)(param_1 + 0x73ba) = 0;
  *(undefined8 *)(param_1 + 0x73b8) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  (*(code *)PTR_FUN_101340e8)(param_1 + 0x1e);
  uVar2 = 0;
  do {
    fVar3 = (float)uVar2 / 255.0;
    param_1[uVar2 * 3 + 0x708a] = fVar3;
    param_1[uVar2 * 3 + 0x708b] = fVar3;
    iVar1 = uVar2 + 0x2584;
    uVar2 = uVar2 + 1;
    param_1[iVar1 * 3] = fVar3;
  } while (uVar2 < 0x100);
  return param_1;
}

