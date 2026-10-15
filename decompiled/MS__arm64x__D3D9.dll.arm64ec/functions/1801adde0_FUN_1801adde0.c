/*
 * FUN_1801adde0 at 1801adde0
 * undefined FUN_1801adde0(void)
 * Address ranges: 1801adde0-1801adfb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801adde0(longlong param_1,uint param_2,int param_3)

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
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  iVar4 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_1801a4380(*(undefined8 *)(param_1 + 0x130),2,*(undefined8 *)(param_1 + 0x10));
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar9 = 0x16;
  if (uVar1 != 0) {
    if (*(char *)(param_1 + 0x24c) == '\0') {
      uVar9 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar1 * 4);
    }
    else {
      uVar9 = 6;
    }
    uVar9 = uVar9 & 0xf | (*(uint *)(&DAT_18022dca0 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4;
  }
  uVar5 = FUN_1801afae0(param_1,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x23c);
  uVar3 = *(undefined4 *)(param_1 + 0x1ec);
  fVar10 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
  uVar6 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_60,uVar5,0);
  uVar7 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_58,
                        *(undefined4 *)(param_1 + 0x224),iVar4);
  uVar8 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_50,
                        *(undefined4 *)(param_1 + 0x1d4),iVar4);
  FUN_1801a4848(0,0,(float)*(uint *)(param_1 + 0x24) / fVar10,
                (float)*(uint *)(param_1 + 0x28) / fVar10,0,0,
                (float)*(uint *)(param_1 + 0x198) / fVar10,
                (float)*(uint *)(param_1 + 0x19c) / fVar10,*(undefined8 *)(param_1 + 0x130),
                *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,iVar4,
                param_2,param_3,iVar4,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x74),0,0,uVar8,uVar7,
                uVar6,&DAT_18022cfd8,&DAT_18022cfd8,uVar3,uVar2,0,0,uVar9,1);
  return;
}

