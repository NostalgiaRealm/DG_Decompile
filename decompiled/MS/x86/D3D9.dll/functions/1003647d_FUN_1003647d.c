/*
 * FUN_1003647d at 1003647d
 * undefined __thiscall FUN_1003647d(void * this, int param_1, int param_2, int * param_3, undefined4 param_4)
 * Address ranges: 1003647d-100365a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003647d(void *this,int param_1,int param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  
  uVar9 = param_1 - 1;
  if (uVar9 < 4) {
    FUN_10032e50(this,0,0,0);
    iVar2 = (int)uVar9 >> 3;
    if (param_3 == (int *)0x0) {
      *(undefined4 *)((int)this + uVar9 * 4 + 0xf978) = 0;
      *(undefined4 *)((int)this + uVar9 * 4 + 0xf98c) = 0;
    }
    else {
      iVar6 = (**(code **)(*param_3 + 4))();
      if (iVar6 == 1) {
        *(undefined4 *)((int)this + uVar9 * 4 + 0xf978) = 0;
        *(int **)((int)this + uVar9 * 4 + 0xf98c) = param_3 + -7;
        if (*(int *)((int)this + uVar9 * 8 + 0x7fc) != param_2) {
          *(int *)((int)this + uVar9 * 8 + 0x7fc) = param_2;
          pbVar3 = (byte *)((int)this + iVar2 + 0xf69c);
          *pbVar3 = *pbVar3 | '\x01' << (uVar9 & 7);
        }
        cVar5 = (&DAT_100d2700)[param_3[-3]];
        cVar4 = '\x01';
      }
      else {
        piVar8 = param_3 + -0x22;
        (**(code **)(*piVar8 + 0x7c))(param_4);
        *(int **)((int)this + uVar9 * 4 + 0xf978) = piVar8;
        *(undefined4 *)((int)this + uVar9 * 4 + 0xf98c) = 0;
        if (*(int *)((int)this + uVar9 * 8 + 0x7fc) != param_2) {
          *(int *)((int)this + uVar9 * 8 + 0x7fc) = param_2;
          pbVar3 = (byte *)((int)this + iVar2 + 0xf69c);
          *pbVar3 = *pbVar3 | '\x01' << (uVar9 & 7);
        }
        cVar4 = (**(code **)(*piVar8 + 0x3c))();
        cVar5 = (**(code **)(*piVar8 + 0x40))();
      }
      bVar1 = *(byte *)((int)this + 0xf694);
      uVar7 = FUN_1004f270((int *)((param_1 + 0x29f) * 0x20 + (int)this),
                           (int *)(uVar9 * 0x20 + 0x5410 + (int)this),cVar4,cVar5);
      *(byte *)((int)this + 0xf694) = (byte)uVar7 | bVar1;
    }
    *(undefined1 *)((int)this + 0xf6a0) = 1;
    pbVar3 = (byte *)((int)this + iVar2 + 0xf698);
    *pbVar3 = *pbVar3 | '\x01' << (uVar9 & 7);
  }
  return;
}

