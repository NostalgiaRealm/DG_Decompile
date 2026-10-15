/*
 * FUN_100519d0 at 100519d0
 * undefined FUN_100519d0(void)
 * Address ranges: 100519d0-10051b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100519d0(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  
  piVar2 = (int *)(param_1 + 0x1530);
  if ((*(char *)(param_1 + 0x1755) != '\0') ||
     ((*piVar2 != 0 && (*(char *)(*piVar2 + 0xd4) != '\0')))) {
    puVar1 = (undefined8 *)(param_1 + 0x104);
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x10c) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x11c) = 0;
      *(undefined8 *)(param_1 + 0x114) = 0;
      *(undefined8 *)(param_1 + 300) = 0;
      *(undefined8 *)(param_1 + 0x124) = 0;
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x134) = 0;
      *(undefined8 *)(param_1 + 0x144) = 0;
    }
    else {
      uVar7 = *(undefined8 *)(iVar3 + 0x94);
      *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(iVar3 + 0x9c);
      *(undefined8 *)(param_1 + 0x114) = uVar7;
      uVar7 = *(undefined8 *)(iVar3 + 0x84);
      *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(iVar3 + 0x8c);
      *puVar1 = uVar7;
      uVar7 = *(undefined8 *)(iVar3 + 0xb4);
      *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(iVar3 + 0xbc);
      *(undefined8 *)(param_1 + 0x134) = uVar7;
      uVar7 = *(undefined8 *)(iVar3 + 0xa4);
      *(undefined8 *)(param_1 + 300) = *(undefined8 *)(iVar3 + 0xac);
      *(undefined8 *)(param_1 + 0x124) = uVar7;
      fVar6 = *(float *)(iVar3 + 0xc4);
      *(float *)(param_1 + 0x144) = fVar6;
      dVar5 = (double)FUN_100819b0(0x3f50624dd2f1a9fc,1.0 / (double)fVar6);
      *(float *)(param_1 + 0x148) = (float)dVar5;
      *(undefined1 *)(iVar3 + 0xd4) = 0;
    }
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,puVar1);
    *(undefined1 *)(param_1 + 0x1755) = 0;
  }
  return *piVar2 != 0;
}

