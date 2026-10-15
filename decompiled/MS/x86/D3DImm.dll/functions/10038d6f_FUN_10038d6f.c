/*
 * FUN_10038d6f at 10038d6f
 * undefined __thiscall FUN_10038d6f(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 10038d6f-10039283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10038d6f(void *this,int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  undefined4 local_c;
  
  puVar1 = (uint *)(param_2 + 0x10);
  uVar4 = FUN_10056ee5((int)puVar1,4,'\x01');
  *(uint *)(param_2 + 0x138) = uVar4;
  FUN_10038cad(param_1,param_2);
  if (*(char *)(param_2 + 0x189) == '\0') {
    FUN_10056fd9((int)puVar1,*(uint *)(param_2 + 0x130));
    *(undefined4 *)(param_2 + 0x130) = 0;
  }
  uVar4 = *(uint *)(*(int *)(param_2 + 0x180) + 0x44) >> 0x16;
  iVar5 = FUN_10057dfe(*puVar1);
  if ((iVar5 == 0x51) || (*(char *)(param_2 + 0x5d) == '\0')) {
    bVar3 = false;
    if ((uVar4 & 1) == 0) goto LAB_10038dfa;
    FUN_100380e6(this,param_2,param_1,0x11,0,1,*(uint *)(param_2 + 0x138));
    FUN_100380e6(this,param_2,param_1,0x11,0,2,*(uint *)(param_2 + 0x138));
    if (param_3 == 0) {
      FUN_100380e6(this,param_2,param_1,0x11,0,8,*(uint *)(param_2 + 0x138));
    }
    else {
      FUN_10057c8a((int *)puVar1,param_1,0x11);
      FUN_100380e6(this,param_2,param_1,0x36,0,8,param_3);
    }
    local_c = 0;
  }
  else {
    bVar3 = true;
LAB_10038dfa:
    local_c = FUN_10056ee5((int)puVar1,4,'\x01');
    FUN_10057c8a((int *)puVar1,param_1,0x11);
    FUN_10057c8a((int *)puVar1,param_1,0x11);
    FUN_10057c8a((int *)puVar1,param_1,0x11);
    if (param_3 != 0) {
      FUN_10057c8a((int *)puVar1,param_1,0x36);
    }
    if ((uVar4 & 1) == 0) {
      if (local_c == 0) {
        local_c = FUN_10056ee5((int)puVar1,4,'\x01');
      }
      FUN_10057c8a((int *)puVar1,param_1,0x11);
      goto LAB_10039029;
    }
  }
  FUN_100380e6(this,param_2,param_1,0x11,0,4,*(uint *)(param_2 + 0x138));
LAB_10039029:
  uVar6 = *(uint *)(param_2 + 0x138);
  if (*(char *)(param_2 + 0x18b) == '\0') {
    FUN_10056fd9((int)puVar1,uVar6);
    *(undefined4 *)(param_2 + 0x138) = 0;
  }
  else if (uVar6 != 0) {
    bVar7 = (byte)(uVar6 >> 0x12) & 3;
    pbVar2 = (byte *)((uVar6 & 0xff) + *(int *)(param_2 + 0x40));
    *pbVar2 = *pbVar2 & ~(('\x01' << ((byte)(uVar6 >> 0x14) & 7)) + -1 << bVar7);
    pbVar2 = (byte *)((uVar6 & 0xff) + *(int *)(param_2 + 0x40));
    *pbVar2 = *pbVar2 | '\a' << bVar7;
  }
  piVar8 = (int *)(param_2 + 0x10);
  if (bVar3) {
    uVar6 = FUN_10056ee5((int)piVar8,2,'\0');
    FUN_10057c8a(piVar8,param_1,0xe);
    if ((uVar4 & 1) == 0) {
      FUN_10057c8a(piVar8,param_1,0x32);
    }
    else {
      FUN_100380e6(this,param_2,param_1,0x32,0,3,uVar6);
      FUN_100380e6(this,param_2,param_1,0x36,0,8,local_c);
    }
    FUN_10056fd9((int)piVar8,uVar6);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_10056ee5((int)piVar8,4,'\x01');
    uVar6 = FUN_10056ee5((int)piVar8,1,'\0');
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0x39);
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0x1d);
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0x3c);
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0xe);
    FUN_100380e6(this,param_2,param_1,0x37,0,0xf,uVar6);
    FUN_10056fd9(param_2 + 0x10,uVar4);
  }
  FUN_10056fd9(param_2 + 0x10,local_c);
  return;
}

