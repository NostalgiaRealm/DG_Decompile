/*
 * FUN_180096b08 at 180096b08
 * undefined FUN_180096b08(void)
 * Address ranges: 180096b08-180096ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180096b08(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  iVar4 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_18008db78(*(undefined8 *)(param_1 + 0x130),2,*(undefined8 *)(param_1 + 0x10));
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar9 = 0x16;
  if (uVar1 != 0) {
    uVar9 = 6;
    if (*(char *)(param_1 + 0x24c) == '\0') {
      uVar9 = *(uint *)(&DAT_180231550 + (ulonglong)uVar1 * 4);
    }
    uVar9 = uVar9 & 0xf | (*(uint *)(&DAT_180231770 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4;
  }
  uVar5 = FUN_1800987e0(param_1,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x23c);
  uVar3 = *(undefined4 *)(param_1 + 0x1ec);
  fVar10 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
  uVar6 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_80,uVar5,0);
  uVar7 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_78,
                        *(undefined4 *)(param_1 + 0x224),iVar4);
  uVar8 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_70,
                        *(undefined4 *)(param_1 + 0x1d4),iVar4);
  FUN_18008e010(0,0,(float)*(uint *)(param_1 + 0x24) / fVar10,
                (float)*(uint *)(param_1 + 0x28) / fVar10,0,0,
                (float)*(uint *)(param_1 + 0x198) / fVar10,
                (float)*(uint *)(param_1 + 0x19c) / fVar10,*(undefined8 *)(param_1 + 0x130),
                *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,iVar4,
                param_2,param_3,iVar4,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x74),0,0,uVar8,uVar7,
                uVar6,&DAT_180231350,&DAT_180231350,uVar3,uVar2,0,0,uVar9,1);
  return;
}

