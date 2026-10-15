/*
 * FUN_10010137 at 10010137
 * undefined __thiscall FUN_10010137(void * this, byte param_1, char param_2, char param_3, char param_4, char param_5, char param_6)
 * Address ranges: 10010137-10010206
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10010137(void *this,byte param_1,char param_2,char param_3,char param_4,char param_5,
            char param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  
  cVar1 = '\0';
  uVar2 = FUN_100118f8(*(void **)((int)this + 0x365c),*(int *)((int)this + 0x2b1c));
  if (uVar2 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(uVar2);
    cVar1 = FUN_100165de(iVar3);
  }
  if ((param_1 == 0) || (param_3 == '\0')) {
    bVar6 = 0;
    if (param_1 != 0) goto LAB_10010182;
LAB_1001018c:
    uVar4 = (ushort)param_1;
    if (param_1 != 0) goto LAB_10010192;
  }
  else {
    bVar6 = 1;
LAB_10010182:
    if (param_4 == '\0') goto LAB_1001018c;
    uVar4 = CONCAT11(2,param_1);
LAB_10010192:
    if (param_5 != '\0') {
      bVar5 = 4;
      goto LAB_1001019e;
    }
  }
  bVar5 = 0;
LAB_1001019e:
  if (cVar1 != '\0') {
    if (((char)uVar4 == '\0') || (param_6 == '\0')) {
      param_2 = '\0';
    }
    else {
      param_2 = '\x01';
    }
  }
  bVar6 = (param_2 == '\0') - 1U & 8 | (byte)(uVar4 >> 8) | bVar5 | bVar6;
  if (bVar6 != *(byte *)((int)this + 0x2c7c)) {
    FUN_1001164d(*(int **)((int)this + 0x365c));
    (**(code **)(*(int *)this + 0x198))();
    *(byte *)((int)this + 0x2c7c) = bVar6;
    *(undefined1 *)((int)this + 0x2da9) = 1;
    FUN_1001fab7((int)this);
    *(undefined1 *)((int)this + 0x3650) = 1;
  }
  return;
}

