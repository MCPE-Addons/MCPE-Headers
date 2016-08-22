#pragma once

#include <string>

class Options {
public:
	enum OptionType { OptionBoolean, OptionProgress, OptionString, OptionInt };

	class Option {
		const Options::OptionType _optionType;
		const std::string _captionId;

	public:
		static const Options::Option MUSIC;
		static const Options::Option SOUND;
		static const Options::Option INVERT_MOUSE;
		static const Options::Option SENSITIVITY;
		static const Options::Option VIEW_DISTANCE;
		static const Options::Option VIEW_BOBBING;
		static const Options::Option LIMIT_FRAMERATE;
		static const Options::Option DIFFICULTY;
		static const Options::Option GRAPHICS;
		static const Options::Option GUI_SCALE;

		static const Options::Option THIRD_PERSON;
		static const Options::Option HIDE_GUI;
		static const Options::Option SERVER_VISIBLE;
		static const Options::Option LEFT_HANDED;
		static const Options::Option USE_TOUCHSCREEN;
		static const Options::Option USE_TOUCH_JOYPAD;
		static const Options::Option DESTROY_VIBRATION;

		static const Options::Option FANCY_SKIES;
		static const Options::Option ANIMATE_TEXTURES;
		static const Options::Option PIXELS_PER_MILLIMETER;

		static const Options::Option NAME;

		static const Options::Option LIMIT_WORLD_SIZE;
		static const Options::Option GAMMA;

		static const Options::Option VR_LIVING_ROOM_MODE;

		Option(const std::string& captionId, Options::OptionType optionType)
			: _captionId(captionId), _optionType(optionType) {}

		bool isProgress() const { return _optionType == OptionProgress; }
		bool isBoolean() const { return _optionType == OptionBoolean; }
		bool isString() const { return _optionType == OptionString; }
		bool isInt() const { return _optionType == OptionInt; }

		std::string getCaptionId() const { return _captionId; }
	};

	static const std::vector<int> GUI_SCALE_OFFSET_VALUES;
	static const std::vector<int> GUI_SCALE_OFFSET_POCKET_VALUES;

	void registerStringObserver(void *, const Options::Option &, std::function<void(std::string)>);
	void registerIntObserver(void *, const Options::Option &, std::function<void(int)>);
	void registerFloatObserver(void *, const Options::Option &, std::function<void(float)>);
	void registerBoolObserver(void *, const Options::Option &, std::function<void(bool)>);

	void toggle(const Options::Option*, int);
	int getIntValue(const Options::Option*);
	float getProgressValue(const Options::Option*);
	std::string getStringValue(const Options::Option*);
	bool getBooleanValue(const Options::Option*);
	float getProgrssMin(const Options::Option*);
	float getProgrssMax(const Options::Option*);

	const std::vector<int> &getValues(const Options::Option*);
};