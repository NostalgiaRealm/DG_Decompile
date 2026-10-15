/*
 * FUN_100224a0 at 100224a0
 * undefined __thiscall FUN_100224a0(void * this, int param_1, float param_2)
 * Address ranges: 100224a0-1002251d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100224a0(void *this,int param_1,float param_2)

{
  switch(param_1) {
  case 4:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2f:
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x89:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x97:
  case 0x98:
    (**(code **)(*(int *)this + 0x98))(0);
  }
  FUN_10029760(this,(int)this + 0x80,(uint *)((int)this + 0x1d30),param_1,param_2);
  if (param_1 == 0x29) {
    FUN_1001d230(this,*(uint *)((int)this + 0x1fc8));
    FUN_1001d230(this,*(uint *)((int)this + 0x1fec));
    *(undefined4 *)((int)this + 0x1fc8) = 0;
    *(undefined4 *)((int)this + 0x1fec) = 0;
  }
  return;
}

