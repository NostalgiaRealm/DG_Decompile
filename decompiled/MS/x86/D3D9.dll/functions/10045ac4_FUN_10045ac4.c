/*
 * FUN_10045ac4 at 10045ac4
 * undefined __thiscall FUN_10045ac4(void * this, int param_1, int param_2, int * param_3, char param_4)
 * Address ranges: 10045ac4-10045bc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045ac4(void *this,int param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1 - 1;
  if (uVar6 < 4) {
    FUN_10042220(this,0,0,0);
    FUN_1003cdd0(this,*(uint *)((int)this + uVar6 * 4 + 0xfba8));
    *(undefined4 *)((int)this + uVar6 * 4 + 0xfba8) = 0;
    iVar1 = (int)uVar6 >> 3;
    pbVar2 = (byte *)((int)this + iVar1 + 0xfc28);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar6 & 7));
    if (param_3 == (int *)0x0) {
      *(undefined4 *)((int)this + uVar6 * 4 + 0xfb80) = 0;
      *(undefined4 *)((int)this + uVar6 * 4 + 0xfb94) = 0;
    }
    else {
      iVar5 = (**(code **)(*param_3 + 4))();
      if (iVar5 == 1) {
        *(undefined4 *)((int)this + uVar6 * 4 + 0xfb80) = 0;
        *(int **)((int)this + uVar6 * 4 + 0xfb94) = param_3 + -7;
      }
      else {
        if (((param_4 == '\0') || (iVar5 = (**(code **)(*param_3 + 0x24))(), iVar5 != 1)) ||
           (param_3[-0x27] != 1)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)((int)param_3 + 0x6e) = uVar3;
        *(int **)((int)this + uVar6 * 4 + 0xfb80) = param_3 + -0x30;
        *(undefined4 *)((int)this + uVar6 * 4 + 0xfb94) = 0;
        cVar4 = FUN_1003a4d0(param_3[-0x23]);
        if (cVar4 != '\0') {
          pbVar2 = (byte *)((int)this + iVar1 + 0xfc20);
          *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
        }
      }
      if (*(int *)((int)this + uVar6 * 8 + 0x7fc) != param_2) {
        *(int *)((int)this + uVar6 * 8 + 0x7fc) = param_2;
        pbVar2 = (byte *)((int)this + iVar1 + 0xf69c);
        *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
      }
      *(undefined1 *)((int)this + 0xfd9b) = 1;
    }
    *(undefined1 *)((int)this + 0xf6a0) = 1;
    pbVar2 = (byte *)((int)this + iVar1 + 0xf698);
    *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
    return;
  }
  return;
}

